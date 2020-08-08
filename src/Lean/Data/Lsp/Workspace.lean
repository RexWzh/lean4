import Lean.Data.Lsp.Basic
import Lean.Data.Json

namespace Lean
namespace Lsp

open Json

structure WorkspaceFolder :=
(uri : DocumentUri)
(name : String)

instance WorkspaceFolder.hasFromJson : HasFromJson WorkspaceFolder :=
⟨fun j => do
  uri ← j.getObjValAs? DocumentUri "uri";
  name ← j.getObjValAs? String "name";
  pure ⟨uri, name⟩⟩

instance WorkspaceFolder.hasToJson : HasToJson WorkspaceFolder :=
⟨fun o => mkObj $
  [ ⟨"uri", toJson o.uri⟩
  , ⟨"name", toJson o.name⟩
  ]⟩

-- TODO(WN):
-- WorkspaceFoldersServerCapabilities,
-- DidChangeWorkspaceFoldersParams,
-- WorkspaceFoldersChangeEvent

end Lsp
end Lean

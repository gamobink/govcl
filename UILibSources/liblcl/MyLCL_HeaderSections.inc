
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function HeaderSections_Create(AOwner: TCustomHeaderControl): THeaderSections; extdecl;
begin
  Result :=  THeaderSections.Create(AOwner);
end;

procedure HeaderSections_Free(AObj: THeaderSections); extdecl;
begin
  AObj.Free;
end;

function HeaderSections_Add(AObj: THeaderSections): THeaderSection; extdecl;
begin
  Result :=  AObj.Add;
end;

function HeaderSections_Insert(AObj: THeaderSections; Index: Integer): THeaderSection; extdecl;
begin
  Result :=  AObj.Insert(Index);
end;

function HeaderSections_Owner(AObj: THeaderSections): TPersistent; extdecl;
begin
  Result :=  AObj.Owner;
end;

procedure HeaderSections_Assign(AObj: THeaderSections; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

procedure HeaderSections_BeginUpdate(AObj: THeaderSections); extdecl;
begin
  AObj.BeginUpdate;
end;

procedure HeaderSections_Clear(AObj: THeaderSections); extdecl;
begin
  AObj.Clear;
end;

procedure HeaderSections_Delete(AObj: THeaderSections; Index: Integer); extdecl;
begin
  AObj.Delete(Index);
end;

procedure HeaderSections_EndUpdate(AObj: THeaderSections); extdecl;
begin
  AObj.EndUpdate;
end;

function HeaderSections_GetNamePath(AObj: THeaderSections): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

function HeaderSections_ClassType(AObj: THeaderSections): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function HeaderSections_ClassName(AObj: THeaderSections): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function HeaderSections_InstanceSize(AObj: THeaderSections): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function HeaderSections_InheritsFrom(AObj: THeaderSections; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function HeaderSections_Equals(AObj: THeaderSections; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function HeaderSections_GetHashCode(AObj: THeaderSections): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function HeaderSections_ToString(AObj: THeaderSections): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function HeaderSections_GetCount(AObj: THeaderSections): Integer; extdecl;
begin
  Result :=  AObj.Count;
end;

function HeaderSections_GetItems(AObj: THeaderSections; Index: Integer): THeaderSection; extdecl;
begin
  Result :=  AObj.Items[Index];
end;

procedure HeaderSections_SetItems(AObj: THeaderSections; Index: Integer; AValue: THeaderSection); extdecl;
begin
  AObj.Items[Index] := AValue;
end;

function HeaderSections_StaticClassType: TClass; extdecl;
begin
  Result := THeaderSections;
end;

exports
  HeaderSections_Create,
  HeaderSections_Free,
  HeaderSections_Add,
  HeaderSections_Insert,
  HeaderSections_Owner,
  HeaderSections_Assign,
  HeaderSections_BeginUpdate,
  HeaderSections_Clear,
  HeaderSections_Delete,
  HeaderSections_EndUpdate,
  HeaderSections_GetNamePath,
  HeaderSections_ClassType,
  HeaderSections_ClassName,
  HeaderSections_InstanceSize,
  HeaderSections_InheritsFrom,
  HeaderSections_Equals,
  HeaderSections_GetHashCode,
  HeaderSections_ToString,
  HeaderSections_GetCount,
  HeaderSections_GetItems,
  HeaderSections_SetItems,
  HeaderSections_StaticClassType;


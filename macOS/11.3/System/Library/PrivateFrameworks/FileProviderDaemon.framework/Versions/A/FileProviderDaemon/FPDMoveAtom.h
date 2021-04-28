/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/Versions/A/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FPActionOperationLocator, NSString;

@interface FPDMoveAtom : NSObject {

	unsigned char _kind;
	char _useAtomicMove;
	char _useDiskWriter;
	FPActionOperationLocator* _root;
	FPActionOperationLocator* _source;
	NSString* _targetName;
	FPActionOperationLocator* _targetFolder;
	unsigned long long _materializeOption;
	unsigned long long _targetMaterializeOption;

}

@property (nonatomic,readonly) unsigned char kind;                                      //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) FPActionOperationLocator * root;                         //@synthesize root=_root - In the implementation block
@property (nonatomic,readonly) FPActionOperationLocator * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * targetName;                                   //@synthesize targetName=_targetName - In the implementation block
@property (nonatomic,readonly) FPActionOperationLocator * targetFolder;                 //@synthesize targetFolder=_targetFolder - In the implementation block
@property (nonatomic,readonly) char useAtomicMove;                                      //@synthesize useAtomicMove=_useAtomicMove - In the implementation block
@property (nonatomic,readonly) char useDiskWriter;                                      //@synthesize useDiskWriter=_useDiskWriter - In the implementation block
@property (nonatomic,readonly) unsigned long long materializeOption;                    //@synthesize materializeOption=_materializeOption - In the implementation block
@property (nonatomic,readonly) unsigned long long targetMaterializeOption;              //@synthesize targetMaterializeOption=_targetMaterializeOption - In the implementation block
+(id)atomForMoving:(id)arg1 toTargetFolder:(id)arg2 as:(id)arg3 root:(id)arg4 atomically:(char)arg5 sourceMaterializeOption:(unsigned long long)arg6 targetMaterializeOption:(unsigned long long)arg7 useDiskWriter:(char)arg8 ;
+(id)atomForPostFolderUnderRoot:(id)arg1 atomically:(char)arg2 useDiskWriter:(char)arg3 ;
-(id)description;
-(FPActionOperationLocator *)source;
-(unsigned char)kind;
-(FPActionOperationLocator *)root;
-(FPActionOperationLocator *)targetFolder;
-(char)shouldAccountForDownloadOfSourceItemForMoveInfo:(id)arg1 extensionManager:(id)arg2 ;
-(id)initWithKind:(unsigned char)arg1 source:(id)arg2 targetName:(id)arg3 targetFolder:(id)arg4 root:(id)arg5 atomically:(char)arg6 sourceMaterializeOption:(unsigned long long)arg7 targetMaterializeOption:(unsigned long long)arg8 useDiskWriter:(char)arg9 ;
-(NSString *)targetName;
-(char)useAtomicMove;
-(char)useDiskWriter;
-(unsigned long long)materializeOption;
-(unsigned long long)targetMaterializeOption;
@end


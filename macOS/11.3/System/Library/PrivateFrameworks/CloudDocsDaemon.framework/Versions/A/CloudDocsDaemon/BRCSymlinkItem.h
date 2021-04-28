/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCLocalItem.h>

@class NSString, BRCAliasItem, BRCDirectoryItem, BRCDocumentItem;

@interface BRCSymlinkItem : BRCLocalItem {

	NSString* _symlinkTarget;

}

@property (nonatomic,readonly) BRCAliasItem * asBRAlias; 
@property (nonatomic,readonly) BRCDirectoryItem * asDirectory; 
@property (nonatomic,readonly) BRCDocumentItem * asDocument; 
@property (nonatomic,readonly) BRCDirectoryItem*<BRCFSRooted> asFSRoot; 
@property (nonatomic,readonly) NSString * symlinkTarget;                             //@synthesize symlinkTarget=_symlinkTarget - In the implementation block
-(char)isSymLink;
-(id)descriptionWithContext:(id)arg1 ;
-(unsigned long long)diffAgainstServerItem:(id)arg1 ;
-(char)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(char)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2 ;
-(id)_initWithLocalItem:(id)arg1 ;
-(id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)diffAgainstLocalItem:(id)arg1 ;
-(id)asSymlink;
-(id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(NSString *)symlinkTarget;
-(void)readTargetFromRelativePathAndSyncUp:(id)arg1 ;
@end


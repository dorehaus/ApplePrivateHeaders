/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSFolderResponseShapeType, EWSTargetFolderIdType, NSString;

@interface EWSSyncFolderHierarchyType : EWSBaseRequestType {

	EWSFolderResponseShapeType* _FolderShape;
	EWSTargetFolderIdType* _SyncFolderId;
	NSString* _SyncState;

}

@property (nonatomic,retain) EWSFolderResponseShapeType * FolderShape;                             //@synthesize FolderShape=_FolderShape - In the implementation block
@property (setter=yncFolderId,nonatomic,retain) EWSTargetFolderIdType * SyncFolderId;              //@synthesize SyncFolderId=_SyncFolderId - In the implementation block
@property (setter=yncState,nonatomic,copy) NSString * SyncState;                                   //@synthesize SyncState=_SyncState - In the implementation block
+(id)definition;
-(void)setSyncFolderId:(EWSTargetFolderIdType *)arg1 ;
-(EWSTargetFolderIdType *)SyncFolderId;
-(void)setSyncState:(NSString *)arg1 ;
-(NSString *)SyncState;
-(void)setFolderShape:(EWSFolderResponseShapeType *)arg1 ;
-(EWSFolderResponseShapeType *)FolderShape;
@end

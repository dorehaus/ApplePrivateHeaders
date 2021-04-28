/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSTargetFolderIdType, NSArray;

@interface EWSBaseMoveCopyFolderType : EWSBaseRequestType {

	EWSTargetFolderIdType* _ToFolderId;
	NSArray* _FolderIds;

}

@property (nonatomic,retain) EWSTargetFolderIdType * ToFolderId;              //@synthesize ToFolderId=_ToFolderId - In the implementation block
@property (nonatomic,copy) NSArray * FolderIds;                               //@synthesize FolderIds=_FolderIds - In the implementation block
+(id)definition;
-(void)setFolderIds:(NSArray *)arg1 ;
-(void)setToFolderId:(EWSTargetFolderIdType *)arg1 ;
-(EWSTargetFolderIdType *)ToFolderId;
-(NSArray *)FolderIds;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ENGroupID;

@interface IDSCloudKitKeyElectionStoreItem : NSObject {

	NSString* _groupName;
	ENGroupID* _groupID;

}

@property (nonatomic,retain) NSString * groupName;              //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) ENGroupID * groupID;               //@synthesize groupID=_groupID - In the implementation block
-(id)description;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(ENGroupID *)groupID;
-(void)setGroupID:(ENGroupID *)arg1 ;
@end

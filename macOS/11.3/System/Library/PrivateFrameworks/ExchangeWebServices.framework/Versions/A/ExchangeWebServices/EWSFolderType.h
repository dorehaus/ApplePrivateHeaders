/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseFolderType.h>

@class EWSPermissionSetType;

@interface EWSFolderType : EWSBaseFolderType {

	char _UnreadCountSpecified;
	EWSPermissionSetType* _PermissionSet;
	long long _UnreadCount;

}

@property (nonatomic,retain) EWSPermissionSetType * PermissionSet;              //@synthesize PermissionSet=_PermissionSet - In the implementation block
@property (assign,nonatomic) long long UnreadCount;                             //@synthesize UnreadCount=_UnreadCount - In the implementation block
@property (assign,nonatomic) char UnreadCountSpecified;                         //@synthesize UnreadCountSpecified=_UnreadCountSpecified - In the implementation block
+(id)definition;
-(id)description;
-(void)setPermissionSet:(EWSPermissionSetType *)arg1 ;
-(EWSPermissionSetType *)PermissionSet;
-(long long)UnreadCount;
-(void)setUnreadCount:(long long)arg1 ;
-(char)UnreadCountSpecified;
-(void)setUnreadCountSpecified:(char)arg1 ;
@end


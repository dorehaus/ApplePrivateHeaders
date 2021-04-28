/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ICNFMCMailbox <NSCopying,NSObject>
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * displayNameWithoutPII; 
@property (nonatomic,copy,readonly) NSString * extendedDisplayName; 
@property (nonatomic,copy,readonly) NSString * URLString; 
@property (readonly) unsigned long long unseenCount; 
@property (readonly) char unseenCountIsKnown; 
@required
-(NSString *)displayName;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
-(NSString *)URLString;
-(id)userInfoObjectForKey:(id)arg1;
-(NSString *)extendedDisplayName;
-(NSString *)displayNameWithoutPII;
-(char)unseenCountIsKnown;
-(unsigned long long)unseenCount;
-(char)userInfoBoolForKey:(id)arg1;
-(void)setUserInfoBool:(char)arg1 forKey:(id)arg2;

@end


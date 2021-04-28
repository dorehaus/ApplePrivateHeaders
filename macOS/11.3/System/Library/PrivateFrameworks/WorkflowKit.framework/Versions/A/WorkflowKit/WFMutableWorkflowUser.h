/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFWorkflowUser.h>

@class NSString, NSURL;

@interface WFMutableWorkflowUser : WFWorkflowUser {

	NSString* email;
	NSString* fullName;
	NSString* twitter;
	NSURL* websiteURL;
	NSURL* profileImageURL;
	long long mainIdentity;

}

@property (nonatomic,copy) NSString * email; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSString * twitter; 
@property (nonatomic,retain) NSURL * websiteURL; 
@property (nonatomic,retain) NSURL * profileImageURL; 
@property (assign,nonatomic) long long mainIdentity; 
-(NSString *)fullName;
-(NSString *)email;
-(NSURL *)websiteURL;
-(void)setWebsiteURL:(NSURL *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(long long)mainIdentity;
-(NSString *)twitter;
-(NSURL *)profileImageURL;
-(void)setTwitter:(NSString *)arg1 ;
-(void)setProfileImageURL:(NSURL *)arg1 ;
-(void)setMainIdentity:(long long)arg1 ;
@end


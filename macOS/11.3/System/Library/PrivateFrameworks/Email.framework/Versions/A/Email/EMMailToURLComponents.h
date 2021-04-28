/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface EMMailToURLComponents : NSObject {

	NSArray* _toRecipients;
	NSArray* _ccRecipients;
	NSArray* _bccRecipients;
	NSString* _subject;
	NSString* _body;

}

@property (nonatomic,readonly) NSArray * toRecipients;               //@synthesize toRecipients=_toRecipients - In the implementation block
@property (nonatomic,readonly) NSArray * ccRecipients;               //@synthesize ccRecipients=_ccRecipients - In the implementation block
@property (nonatomic,readonly) NSArray * bccRecipients;              //@synthesize bccRecipients=_bccRecipients - In the implementation block
@property (nonatomic,readonly) NSString * subject;                   //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSString * body;                      //@synthesize body=_body - In the implementation block
+(id)componentsWithURL:(id)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSString *)subject;
-(NSString *)body;
-(NSArray *)toRecipients;
-(void)_decomposeURL:(id)arg1 ;
-(NSArray *)ccRecipients;
-(NSArray *)bccRecipients;
@end

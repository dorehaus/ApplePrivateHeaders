/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, AMSDialogAction, NSURL, NSString, AMSMetricsEvent, NSDictionary;

@interface AMSDialogRequest : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _buttonActions;
	AMSDialogAction* _defaultAction;
	NSURL* _iconBundleURL;
	NSString* _identifier;
	NSString* _logKey;
	NSString* _message;
	AMSMetricsEvent* _metricsEvent;
	long long _style;
	NSArray* _textFields;
	NSString* _title;
	NSDictionary* _userInfo;

}

@property (copy) NSArray * buttonActions;                        //@synthesize buttonActions=_buttonActions - In the implementation block
@property (retain) AMSDialogAction * defaultAction;              //@synthesize defaultAction=_defaultAction - In the implementation block
@property (copy) NSURL * iconBundleURL;                          //@synthesize iconBundleURL=_iconBundleURL - In the implementation block
@property (copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * logKey;                              //@synthesize logKey=_logKey - In the implementation block
@property (copy) NSString * message;                             //@synthesize message=_message - In the implementation block
@property (copy) AMSMetricsEvent * metricsEvent;                 //@synthesize metricsEvent=_metricsEvent - In the implementation block
@property (assign) long long style;                              //@synthesize style=_style - In the implementation block
@property (copy) NSArray * textFields;                           //@synthesize textFields=_textFields - In the implementation block
@property (copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (copy) NSDictionary * userInfo;                        //@synthesize userInfo=_userInfo - In the implementation block
+(char)supportsSecureCoding;
+(id)requestWithTitle:(id)arg1 message:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(long long)style;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)message;
-(id)initWithError:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setStyle:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
-(void)setDefaultAction:(AMSDialogAction *)arg1 ;
-(AMSDialogAction *)defaultAction;
-(NSString *)logKey;
-(NSURL *)iconBundleURL;
-(void)setIconBundleURL:(NSURL *)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(AMSMetricsEvent *)metricsEvent;
-(void)setMetricsEvent:(AMSMetricsEvent *)arg1 ;
-(NSArray *)buttonActions;
-(NSArray *)textFields;
-(void)setTextFields:(NSArray *)arg1 ;
-(void)addTextField:(id)arg1 ;
-(void)setButtonActions:(NSArray *)arg1 ;
-(void)addButtonAction:(id)arg1 ;
-(id)locateActionWithIdentifier:(id)arg1 ;
-(void)replaceAction:(id)arg1 ;
@end


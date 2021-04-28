/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface ICUserNotificationBuilder : NSObject <NSCopying> {

	NSMutableDictionary* _userNotificationDictionary;
	long long _alertLevel;
	double _timeoutInterval;

}

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * alternateButtonTitle; 
@property (nonatomic,copy) NSString * defaultButtonTitle; 
@property (nonatomic,copy) NSString * otherButtonTitle; 
@property (assign,nonatomic) char allowInCar; 
@property (assign,nonatomic) char displaysActionButtonOnLockScreen; 
@property (assign,nonatomic) char displaysAsTopMost; 
@property (assign,nonatomic) char forcesModalAppearance; 
@property (assign,nonatomic) long long alertLevel;                               //@synthesize alertLevel=_alertLevel - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                             //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)message;
-(void)setTitle:(NSString *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)otherButtonTitle;
-(void)setOtherButtonTitle:(NSString *)arg1 ;
-(NSString *)defaultButtonTitle;
-(void)setDefaultButtonTitle:(NSString *)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
-(void)_setBoolValue:(char)arg1 forKey:(CFStringRef)arg2 ;
-(NSString *)alternateButtonTitle;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
-(id)initWithStoreDialog:(id)arg1 ;
-(char)allowInCar;
-(CFUserNotificationRef)createCFUserNotification;
-(char)displaysActionButtonOnLockScreen;
-(char)displaysAsTopMost;
-(char)forcesModalAppearance;
-(void)setAllowInCar:(char)arg1 ;
-(void)setDisplaysActionButtonOnLockScreen:(char)arg1 ;
-(void)setDisplaysAsTopMost:(char)arg1 ;
-(void)setForcesModalAppearance:(char)arg1 ;
-(long long)alertLevel;
-(void)setAlertLevel:(long long)arg1 ;
@end


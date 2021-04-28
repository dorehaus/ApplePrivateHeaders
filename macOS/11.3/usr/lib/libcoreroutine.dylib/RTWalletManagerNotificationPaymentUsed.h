/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSString, NSDate, CLLocation, NSNumber;

@interface RTWalletManagerNotificationPaymentUsed : RTNotification {

	NSString* _passIdentifier;
	NSString* _transactionIdentifier;
	NSDate* _date;
	CLLocation* _location;
	NSNumber* _muid;
	NSNumber* _provider;

}

@property (nonatomic,copy,readonly) NSString * passIdentifier;                     //@synthesize passIdentifier=_passIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSNumber * muid;                                    //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) NSNumber * provider;                                //@synthesize provider=_provider - In the implementation block
-(NSDate *)date;
-(CLLocation *)location;
-(NSNumber *)provider;
-(NSNumber *)muid;
-(NSString *)passIdentifier;
-(NSString *)transactionIdentifier;
@end


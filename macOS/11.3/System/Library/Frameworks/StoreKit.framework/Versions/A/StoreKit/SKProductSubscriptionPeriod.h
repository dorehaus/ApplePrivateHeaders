/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SKProductSubscriptionPeriod : NSObject {

	id _internal;

}

@property (nonatomic,readonly) unsigned long long numberOfUnits; 
@property (nonatomic,readonly) unsigned long long unit; 
-(id)init;
-(unsigned long long)unit;
-(id)initWithISO8601String:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(unsigned long long)numberOfUnits;
-(void)_setNumberOfUnits:(unsigned long long)arg1 ;
-(void)_setUnit:(unsigned long long)arg1 ;
@end


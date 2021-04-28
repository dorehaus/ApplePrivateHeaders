/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/Versions/A/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNDonationExtensionLogger;
@class NSExtension;

@interface CNDDonorExtension : NSObject {

	NSExtension* _extension;
	id<CNDonationExtensionLogger> _logger;

}

@property (nonatomic,readonly) NSExtension * extension;                           //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) id<CNDonationExtensionLogger> logger;              //@synthesize logger=_logger - In the implementation block
-(id)description;
-(NSExtension *)extension;
-(id<CNDonationExtensionLogger>)logger;
-(id)initWithExtension:(id)arg1 ;
-(void)renewExpirationDateForDonatedValue:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)redonateAllValuesWithReason:(unsigned long long)arg1 ;
-(id)initWithExtension:(id)arg1 logger:(id)arg2 ;
@end


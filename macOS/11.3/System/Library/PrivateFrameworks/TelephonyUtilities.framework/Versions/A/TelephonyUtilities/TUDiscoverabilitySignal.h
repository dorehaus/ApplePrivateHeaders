/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TUDiscoverabilitySignal : NSObject {

	NSString* _identifier;
	NSString* _context;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * context;                 //@synthesize context=_context - In the implementation block
+(id)osBuild;
-(NSString *)identifier;
-(NSString *)context;
-(id)_discoverabilitySignalsStream;
-(void)donateSignalWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 context:(id)arg2 ;
@end


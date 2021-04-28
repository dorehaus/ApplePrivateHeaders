/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/Versions/A/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSLocaleLanguage : NSObject {

	NSString* _twoCharacterCode;
	NSString* _threeCharacterCode;

}

@property (copy) NSString * twoCharacterCode;                //@synthesize twoCharacterCode=_twoCharacterCode - In the implementation block
@property (copy) NSString * threeCharacterCode;              //@synthesize threeCharacterCode=_threeCharacterCode - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(void)setTwoCharacterCode:(NSString *)arg1 ;
-(void)setThreeCharacterCode:(NSString *)arg1 ;
-(NSString *)twoCharacterCode;
-(NSString *)threeCharacterCode;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/Versions/A/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNCountryInformation, NSString;

@interface PKCountryInformation : NSObject {

	CNCountryInformation* _countryInformation;
	NSString* _localizedCountryName;

}

@property (nonatomic,retain) CNCountryInformation * countryInformation;              //@synthesize countryInformation=_countryInformation - In the implementation block
@property (nonatomic,copy) NSString * localizedCountryName;                          //@synthesize localizedCountryName=_localizedCountryName - In the implementation block
-(CNCountryInformation *)countryInformation;
-(void)setCountryInformation:(CNCountryInformation *)arg1 ;
-(NSString *)localizedCountryName;
-(void)setLocalizedCountryName:(NSString *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/ABMapsLauncher.h>

@class CLGeocoder;

@interface _ABGeocodingMapsLauncher : ABMapsLauncher {

	CLGeocoder* _geocoder;

}

@property (nonatomic,readonly) CLGeocoder * geocoder;              //@synthesize geocoder=_geocoder - In the implementation block
-(CLGeocoder *)geocoder;
-(void)launchMaps;
-(id)initWithLaunchRequest:(id)arg1 nextLauncher:(id)arg2 ;
-(void)showPlacemarks:(id)arg1 ;
-(void)launchMapsShowingPlacemarks:(id)arg1 ;
-(id)launchOptionsWithDirections:(char)arg1 ;
@end


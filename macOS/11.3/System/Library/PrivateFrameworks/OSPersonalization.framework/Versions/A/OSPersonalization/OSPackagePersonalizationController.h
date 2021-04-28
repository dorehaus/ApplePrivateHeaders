/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSPersonalization.framework/Versions/A/OSPersonalization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OSPackagePersonalizationController : NSObject
+(id)sharedController;
-(void)personalizePackageSpecifiersForInstall:(id)arg1 outputDirectory:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)personalizationRequiredForPackageSpecifiers:(id)arg1 ;
-(id)_recommendedFirmwareBundleComponentInSpecifiers:(id)arg1 ;
-(char)_extractFirmwareBundleComponentFromPackage:(id)arg1 toDestination:(id)arg2 error:(id*)arg3 ;
@end


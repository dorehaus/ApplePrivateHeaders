/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLSeasonsUtilities : NSObject
+(id)localizedSeasonNameForDate:(id)arg1 calendar:(id)arg2 locale:(id)arg3 ;
+(id)_seasonNameForKey:(id)arg1 ;
+(id)_seasonKeyForMonthNumber:(unsigned long long)arg1 locale:(id)arg2 ;
+(id)_northernMeteorologicalSeasonKeyForMonthNumber:(unsigned long long)arg1 ;
+(id)_southernMeteorologicalSeasonKeyForMonthNumber:(unsigned long long)arg1 ;
+(id)_seasonCountryCodesDictionary;
+(char)isCountryCodePartOfNorthernHemisphere:(id)arg1 ;
+(char)isCountryCodePartOfSouthernHemisphere:(id)arg1 ;
@end


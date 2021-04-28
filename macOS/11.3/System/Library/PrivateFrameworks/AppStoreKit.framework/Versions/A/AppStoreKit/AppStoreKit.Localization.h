/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/Versions/A/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreKit/AppStoreKit.LocalizationProtocol.h>

@class NSString;

@interface AppStoreKit.Localization : NSObject <AppStoreKit.LocalizationProtocol> {

	??? locale;
	??? extendedLocale;
	 localizedStringTables;
	 dateFormatters;
	 dynamicDateFormatters;
	 $__lazy_storage_$_relativeDateFormatter;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) NSString * arcadeWordmarkAssetName; 
-(id)init;
-(NSString *)identifier;
-(id)fileSize:(id)arg1 ;
-(id)string:(id)arg1 ;
-(NSString *)arcadeWordmarkAssetName;
-(id)decimal:(id)arg1 :(long long)arg2 ;
-(id)stringWithCount:(id)arg1 :(long long)arg2 ;
-(id)stringWithCounts:(id)arg1 :(id)arg2 ;
-(id)formattedCount:(id)arg1 ;
-(id)timeAgo:(id)arg1 ;
-(id)timeAgoWithContext:(id)arg1 :(id)arg2 ;
-(id)formatDate:(id)arg1 :(id)arg2 ;
-(id)formatDateWithContext:(id)arg1 :(id)arg2 :(id)arg3 ;
-(id)formatDateInSentence:(id)arg1 :(id)arg2 :(id)arg3 ;
-(id)relativeDate:(id)arg1 ;
@end


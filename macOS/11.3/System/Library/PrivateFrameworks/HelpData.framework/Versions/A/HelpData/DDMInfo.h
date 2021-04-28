/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HelpData.framework/Versions/A/HelpData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpData/DDMObject.h>

@class NSArray, NSString;

@interface DDMInfo : DDMObject {

	NSArray* _platforms;
	NSArray* _versions;
	NSString* _locale;

}

@property (readonly) NSArray * platforms;              //@synthesize platforms=_platforms - In the implementation block
@property (readonly) NSArray * versions;               //@synthesize versions=_versions - In the implementation block
@property (readonly) NSString * locale;                //@synthesize locale=_locale - In the implementation block
-(NSString *)locale;
-(NSArray *)versions;
-(NSArray *)platforms;
@end


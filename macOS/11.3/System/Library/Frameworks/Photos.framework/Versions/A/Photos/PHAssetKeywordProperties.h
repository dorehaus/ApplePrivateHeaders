/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@class NSSet;

@interface PHAssetKeywordProperties : PHAssetPropertySet {

	NSSet* _keywordTitles;

}

@property (nonatomic,copy,readonly) NSSet * keywordTitles;              //@synthesize keywordTitles=_keywordTitles - In the implementation block
+(id)entityName;
+(id)propertiesToFetch;
+(char)isToMany;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
-(NSSet *)keywordTitles;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(char)arg3 ;
@end


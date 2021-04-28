/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/Versions/A/EmojiFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface EMFQueryResultOverrideList : NSObject {

	NSDictionary* _overrideMap;

}
-(id)overriddenResultsForQuery:(id)arg1 searchType:(unsigned long long)arg2 ;
-(id)_overriddenResultsRawStringExactMatchForQuery:(id)arg1 ;
-(id)_overriddenResultsRawStringPrefixMatchForQuery:(id)arg1 ;
-(id)_overriddenResultsTokenExactMatchForQuery:(id)arg1 ;
-(id)_overriddenResultsTokenPrefixMatchForQuery:(id)arg1 ;
-(id)_metadataForString:(id)arg1 ;
-(id)_overriddenResultsRawStringExactMatchForRawString:(id)arg1 andSearchType:(unsigned long long)arg2 ;
-(id)initWithOverrideListURL:(id)arg1 ;
-(id)overriddenResultsForQuery:(id)arg1 ;
@end


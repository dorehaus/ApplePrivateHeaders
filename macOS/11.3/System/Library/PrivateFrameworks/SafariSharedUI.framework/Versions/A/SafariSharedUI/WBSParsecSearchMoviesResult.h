/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/WBSParsecLegacySearchResult.h>

@class NSMutableArray, NSString;

@interface WBSParsecSearchMoviesResult : WBSParsecLegacySearchResult {

	NSMutableArray* _posterRepresentations;
	NSString* _descriptionLeadInText;

}

@property (nonatomic,readonly) NSString * descriptionLeadInText;              //@synthesize descriptionLeadInText=_descriptionLeadInText - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)descriptionLeadInText;
-(id)postersWithSession:(id)arg1 ;
@end


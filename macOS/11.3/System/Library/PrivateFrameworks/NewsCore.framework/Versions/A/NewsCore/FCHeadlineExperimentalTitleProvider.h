/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FCHeadlineExperimentalTitleProvider : NSObject {

	char _shouldShowAlternateHeadlines;
	NSString* _feldsparID;

}

@property (nonatomic,copy,readonly) NSString * feldsparID;                   //@synthesize feldsparID=_feldsparID - In the implementation block
@property (assign,nonatomic) char shouldShowAlternateHeadlines;              //@synthesize shouldShowAlternateHeadlines=_shouldShowAlternateHeadlines - In the implementation block
+(char)isDebugModeEnabled;
-(char)shouldShowAlternateHeadlines;
-(NSString *)feldsparID;
-(id)initWithShouldShowAlternateHeadlines:(char)arg1 ;
-(id)headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3 ;
-(id)_debugHeadlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3 ;
-(id)_headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3 ;
-(id)metadataForDefaultHeadlineWithTitle:(id)arg1 ;
-(void)setShouldShowAlternateHeadlines:(char)arg1 ;
@end


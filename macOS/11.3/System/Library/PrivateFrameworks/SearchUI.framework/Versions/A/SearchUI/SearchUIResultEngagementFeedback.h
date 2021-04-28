/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFResultEngagementFeedback.h>

@class SFResultSection;

@interface SearchUIResultEngagementFeedback : SFResultEngagementFeedback {

	SFResultSection* _section;

}

@property (nonatomic,retain) SFResultSection * section;              //@synthesize section=_section - In the implementation block
-(SFResultSection *)section;
-(void)setSection:(SFResultSection *)arg1 ;
-(id)initWithResult:(id)arg1 inSection:(id)arg2 triggerEvent:(unsigned long long)arg3 destination:(unsigned long long)arg4 ;
@end


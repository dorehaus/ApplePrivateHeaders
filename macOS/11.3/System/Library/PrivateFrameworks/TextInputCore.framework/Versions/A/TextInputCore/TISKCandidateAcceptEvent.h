/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TISKEvent.h>

@class TIKeyboardCandidate, NSString;

@interface TISKCandidateAcceptEvent : TISKEvent {

	TIKeyboardCandidate* _candidate;
	NSString* _wordBucketCategory;

}

@property (nonatomic,retain) TIKeyboardCandidate * candidate;              //@synthesize candidate=_candidate - In the implementation block
@property (nonatomic,retain) NSString * wordBucketCategory;                //@synthesize wordBucketCategory=_wordBucketCategory - In the implementation block
-(id)description;
-(TIKeyboardCandidate *)candidate;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)reportToSession:(id)arg1 ;
-(id)init:(id)arg1 emojiSearchMode:(char)arg2 order:(long long)arg3 wordBucketCategory:(id)arg4 ;
-(NSString *)wordBucketCategory;
-(void)setWordBucketCategory:(NSString *)arg1 ;
@end

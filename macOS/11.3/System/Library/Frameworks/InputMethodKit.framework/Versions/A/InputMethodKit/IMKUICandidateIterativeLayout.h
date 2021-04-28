/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <InputMethodKit/IMKUIAbstractCandidateLayout.h>

@class NSMutableDictionary;

@interface IMKUICandidateIterativeLayout : IMKUIAbstractCandidateLayout {

	unsigned long long _candidateIndex;
	unsigned long long _candidateGroupIndex;
	char _complete;
	NSMutableDictionary* _indexPathToCandidateItemMapping;

}

@property (assign,nonatomic) unsigned long long candidateIndex;                                  //@synthesize candidateIndex=_candidateIndex - In the implementation block
@property (assign,nonatomic) unsigned long long candidateGroupIndex;                             //@synthesize candidateGroupIndex=_candidateGroupIndex - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * indexPathToCandidateItemMapping;              //@synthesize indexPathToCandidateItemMapping=_indexPathToCandidateItemMapping - In the implementation block
@property (assign,getter=isComplete,nonatomic) char complete;                                    //@synthesize complete=_complete - In the implementation block
-(void)setCandidateGroupIndex:(unsigned long long)arg1 ;
-(unsigned long long)candidateGroupIndex;
-(void)didStartIteratingOverCandidateList:(id)arg1 title:(id)arg2 ;
-(void)didFinishIteratingOverCandidateList:(id)arg1 title:(id)arg2 ;
-(void)didFinishIterating;
-(void)processCandidateItem:(id)arg1 stop:(char*)arg2 ;
-(NSMutableDictionary *)indexPathToCandidateItemMapping;
-(void)setIndexPathToCandidateItemMapping:(NSMutableDictionary *)arg1 ;
-(char)isComplete;
-(CGSize)contentSize;
-(void)prepareLayout;
-(void)setComplete:(char)arg1 ;
-(char)iterate;
-(unsigned long long)candidateIndex;
-(void)setCandidateIndex:(unsigned long long)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(void)setCandidateGroups:(id)arg1 ;
@end


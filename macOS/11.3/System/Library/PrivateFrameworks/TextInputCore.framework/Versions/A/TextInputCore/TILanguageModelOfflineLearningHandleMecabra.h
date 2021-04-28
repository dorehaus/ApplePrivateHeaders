/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TILanguageModelOfflineLearningHandle.h>

@class TIWordSearch;

@interface TILanguageModelOfflineLearningHandleMecabra : TILanguageModelOfflineLearningHandle {

	TIWordSearch* _wordSearch;

}

@property (nonatomic,retain) TIWordSearch * wordSearch;              //@synthesize wordSearch=_wordSearch - In the implementation block
-(void)load;
-(TIWordSearch *)wordSearch;
-(void)didFinishLearning;
-(void)updateAdaptationContext:(id)arg1 ;
-(void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3 ;
-(void)setWordSearch:(TIWordSearch *)arg1 ;
@end


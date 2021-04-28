/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNListInstructionContents.h>
#import <libobjc.A.dylib/MNInstructionContents.h>

@class NSString, NSArray;

@interface MNSignInstructionContents : MNListInstructionContents <MNInstructionContents> {

	NSArray* _mergeFormats;
	NSArray* _continueFormats;
	NSArray* _maneuverFormats;

}

@property (nonatomic,retain) NSArray * mergeFormats;                 //@synthesize mergeFormats=_mergeFormats - In the implementation block
@property (nonatomic,retain) NSArray * continueFormats;              //@synthesize continueFormats=_continueFormats - In the implementation block
@property (nonatomic,retain) NSArray * maneuverFormats;              //@synthesize maneuverFormats=_maneuverFormats - In the implementation block
@property (nonatomic,readonly) long long context; 
@property (assign,nonatomic) char suppressNames; 
@property (nonatomic,retain) NSString * roadName; 
@property (nonatomic,readonly) char hasServerContent; 
@property (assign,nonatomic) char suppressFallback; 
+(id)contentsWithStep:(id)arg1 transportType:(int)arg2 destination:(id)arg3 ;
-(id)description;
-(long long)context;
-(void)_populateFromStep:(id)arg1 ;
-(void)setMergeFormats:(NSArray *)arg1 ;
-(void)setContinueFormats:(NSArray *)arg1 ;
-(void)setManeuverFormats:(NSArray *)arg1 ;
-(NSArray *)maneuverFormats;
-(id)_instructionsForFormats:(id)arg1 ;
-(NSArray *)mergeFormats;
-(NSArray *)continueFormats;
-(id)instructionWithShorterAlternatives;
-(id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2 ;
-(char)hasServerContent;
@end


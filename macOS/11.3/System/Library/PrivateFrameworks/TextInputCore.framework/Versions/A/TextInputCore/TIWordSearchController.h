/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface TIWordSearchController : NSObject {

	NSMapTable* _inputModeToWordSearchMapping;

}

@property (nonatomic,retain) NSMapTable * inputModeToWordSearchMapping;              //@synthesize inputModeToWordSearchMapping=_inputModeToWordSearchMapping - In the implementation block
+(id)sharedWordSearchController;
-(id)init;
-(void)setWordSearch:(id)arg1 forInputMode:(id)arg2 ;
-(id)wordSearchForInputMode:(id)arg1 ;
-(NSMapTable *)inputModeToWordSearchMapping;
-(void)setInputModeToWordSearchMapping:(NSMapTable *)arg1 ;
@end


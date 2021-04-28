/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/_AMFinderFile.h>

@interface _AMFinderApplicationFile : _AMFinderFile

@property (readonly) long long suggestedSize; 
@property (assign) long long minimumSize; 
@property (assign) long long preferredSize; 
@property (readonly) char acceptsHighLevelEvents; 
@property (readonly) char hasScriptingTerminology; 
@property (assign) char opensInClassic; 
-(long long)minimumSize;
-(long long)preferredSize;
-(void)setPreferredSize:(long long)arg1 ;
-(void)setMinimumSize:(long long)arg1 ;
-(id)id;
-(long long)suggestedSize;
-(char)acceptsHighLevelEvents;
-(char)hasScriptingTerminology;
-(char)opensInClassic;
-(void)setOpensInClassic:(char)arg1 ;
@end


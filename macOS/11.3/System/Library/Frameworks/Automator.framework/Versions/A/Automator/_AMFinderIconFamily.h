/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@interface _AMFinderIconFamily : SBObject

@property (copy,readonly) id largeMonochromeIconAndMask; 
@property (copy,readonly) id large8BitMask; 
@property (copy,readonly) id large32BitIcon; 
@property (copy,readonly) id large8BitIcon; 
@property (copy,readonly) id large4BitIcon; 
@property (copy,readonly) id smallMonochromeIconAndMask; 
@property (copy,readonly) id small8BitMask; 
@property (copy,readonly) id small32BitIcon; 
@property (copy,readonly) id small8BitIcon; 
@property (copy,readonly) id small4BitIcon; 
-(void)close;
-(void)select;
-(void)activate;
-(id)delete;
-(void)eject;
-(char)exists;
-(void)erase;
-(void)reveal;
-(void)emptySecurity:(char)arg1 ;
-(void)openUsing:(id)arg1 withProperties:(id)arg2 ;
-(void)printWithProperties:(id)arg1 ;
-(long long)dataSizeAs:(id)arg1 ;
-(id)duplicateTo:(id)arg1 replacing:(char)arg2 routingSuppressed:(char)arg3 ;
-(id)moveTo:(id)arg1 replacing:(char)arg2 positionedAt:(id)arg3 routingSuppressed:(char)arg4 ;
-(void)updateNecessity:(char)arg1 registeringApplications:(char)arg2 ;
-(id)largeMonochromeIconAndMask;
-(id)large8BitMask;
-(id)large32BitIcon;
-(id)large8BitIcon;
-(id)large4BitIcon;
-(id)smallMonochromeIconAndMask;
-(id)small8BitMask;
-(id)small32BitIcon;
-(id)small8BitIcon;
-(id)small4BitIcon;
@end

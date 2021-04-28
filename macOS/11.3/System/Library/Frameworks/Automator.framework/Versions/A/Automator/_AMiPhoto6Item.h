/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@class NSDictionary;

@interface _AMiPhoto6Item : SBObject

@property (copy) NSDictionary * properties; 
-(void)select;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(void)delete;
-(char)exists;
-(void)removeFrom:(id)arg1 ;
-(void)addTo:(id)arg1 ;
-(void)resumeSlideshow;
-(void)pauseSlideshow;
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(void)assignKeywordString:(id)arg1 ;
-(void)duplicateTo:(id)arg1 ;
-(void)emptyTrash;
-(id)newAlbumName:(id)arg1 ;
-(void)stopSlideshow;
-(void)saveAs:(id)arg1 in:(id)arg2 ;
-(void)autoImport;
-(void)importFrom:(id)arg1 forceCopy:(long long)arg2 to:(id)arg3 ;
-(void)nextSlide;
-(void)previousSlide;
-(void)startSlideshowAsynchronous:(long long)arg1 displayIndex:(long long)arg2 iChat:(long long)arg3 usingAlbum:(id)arg4 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@interface _AMiPhoto5PrintSettings : SBObject
-(void)select;
-(void)delete;
-(char)exists;
-(void)removeFrom:(id)arg1 ;
-(int)copies;
-(void)setCopies:(int)arg1 ;
-(void)addTo:(id)arg1 ;
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(void)quitSaving:(int)arg1 ;
-(void)saveAs:(id)arg1 in_:(id)arg2 ;
-(void)assignKeywordString:(id)arg1 ;
-(void)duplicateTo:(id)arg1 ;
-(void)emptyTrash;
-(void)importFrom:(id)arg1 to:(id)arg2 ;
-(void)newAlbumName:(id)arg1 ;
-(void)startSlideshowUsingAlbum:(id)arg1 ;
-(void)stopSlideshow;
-(char)collating;
-(void)setCollating:(char)arg1 ;
-(int)startingPage;
-(void)setStartingPage:(int)arg1 ;
-(int)endingPage;
-(void)setEndingPage:(int)arg1 ;
-(int)pagesAcross;
-(void)setPagesAcross:(int)arg1 ;
-(int)pagesDown;
-(void)setPagesDown:(int)arg1 ;
-(id)requestedPrintTime;
-(void)setRequestedPrintTime:(id)arg1 ;
-(int)errorHandling;
-(void)setErrorHandling:(int)arg1 ;
-(id)faxNumber;
-(void)setFaxNumber:(id)arg1 ;
-(id)targetPrinter;
-(void)setTargetPrinter:(id)arg1 ;
@end


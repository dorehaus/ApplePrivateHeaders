/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ScreenSaver.framework/Versions/A/ScreenSaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ScreenSaverDefaultsManager : NSObject {

	NSMutableDictionary* _cache;

}
+(id)defaultsManager;
-(id)init;
-(void)synchronize;
-(void)_appWillTerminate:(id)arg1 ;
-(id)defaultsForKey:(id)arg1 ;
-(void)setDefaults:(id)arg1 forKey:(id)arg2 ;
@end

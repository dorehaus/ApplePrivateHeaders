/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ILMediaObjectsProvider.h>

@class NSMutableArray;

@interface ILDefaultMediaObjectsProvider : NSObject <ILMediaObjectsProvider> {

	NSMutableArray* _mediaObjects;

}
-(void)dealloc;
-(id)init;
-(id)mediaObjects;
-(void)cancelEvaluation;
-(void)addMediaObjects:(id)arg1 ;
-(id)mediaObjectsAsync;
-(void)setMediaObjectsArray:(id)arg1 ;
-(unsigned long long)mediaObjectCount;
-(char)containsMediaObjectsWithMediaTypeMask:(unsigned long long)arg1 ;
-(void)removeMediaObject:(id)arg1 ;
-(char)objectsFetched;
@end


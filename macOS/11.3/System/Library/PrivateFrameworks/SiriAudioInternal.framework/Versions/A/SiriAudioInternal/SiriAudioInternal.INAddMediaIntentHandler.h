/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriAudioInternal.framework/Versions/A/SiriAudioInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/INAddMediaIntentHandling.h>

@interface SiriAudioInternal.INAddMediaIntentHandler : NSObject <INAddMediaIntentHandling> {

	 library;
	 nowPlaying;
	 subscription;

}
-(id)init;
-(void)handleAddMedia:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveMediaItemsForAddMedia:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveMediaDestinationForAddMedia:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end


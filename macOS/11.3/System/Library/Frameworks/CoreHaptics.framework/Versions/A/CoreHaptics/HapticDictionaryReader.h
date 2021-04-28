/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/Versions/A/CoreHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HapticDictionaryReader : NSObject {

	unsigned long long _urlIndex;

}
-(id)parseEvent:(id)arg1 ;
-(id)parseParam:(id)arg1 ;
-(id)parseParamCurve:(id)arg1 ;
-(id)parseEventParams:(id)arg1 ;
-(id)parseParamCurveControlPoints:(id)arg1 ;
-(char)verifyVersion:(id)arg1 ;
-(id)scanForEmbeddedURLs:(id)arg1 ;
-(char)parseEventsAndParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
@end


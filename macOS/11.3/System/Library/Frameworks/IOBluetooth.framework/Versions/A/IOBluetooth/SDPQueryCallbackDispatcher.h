/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SDPQueryCallbackDispatcher : NSObject {

	id mTarget;
	void* mRefCon;

}
-(void)dealloc;
-(id)initWithTarget:(id)arg1 ;
-(oneway void)sdpQueryComplete:(nO@)arg1 status:(int)arg2 ;
@end

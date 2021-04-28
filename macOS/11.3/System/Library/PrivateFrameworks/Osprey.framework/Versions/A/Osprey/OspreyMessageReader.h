/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Versions/A/Osprey
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData;

@interface OspreyMessageReader : NSObject {

	/*^block*/id _messageHandler;
	unsigned long long _readerState;
	unsigned long long _messageSequence;
	char _currentMessageCompressed;
	unsigned long long _currentMessageSize;
	NSMutableData* _messageBuffer;

}
-(void)readData:(id)arg1 ;
-(id)initWithMessageHandler:(/*^block*/id)arg1 ;
-(void)_produceMessageBody:(id)arg1 ;
@end


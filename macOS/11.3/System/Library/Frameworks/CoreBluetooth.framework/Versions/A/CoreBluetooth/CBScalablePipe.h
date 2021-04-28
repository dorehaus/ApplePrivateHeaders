/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/Versions/A/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CBScalablePipeManager, CBCentral, CBPeer, NSString, NSInputStream, NSOutputStream;

@interface CBScalablePipe : NSObject {

	CBScalablePipeManager* _pipeManager;
	int _socket;
	char _reliablePipe;
	unsigned char _localCLVersion;
	unsigned char _peerCLVersion;
	unsigned _localCLFeatures;
	unsigned _peerCLFeatures;
	CBCentral* _central;
	CBPeer* _peer;
	NSString* _name;
	long long _type;
	long long _priority;
	long long _peerType;
	NSInputStream* _input;
	NSOutputStream* _output;
	void* _channel;

}

@property (nonatomic,readonly) CBCentral * central;                       //@synthesize central=_central - In the implementation block
@property (nonatomic,readonly) CBPeer * peer;                             //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long priority;                        //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) char reliablePipe;                         //@synthesize reliablePipe=_reliablePipe - In the implementation block
@property (nonatomic,readonly) long long peerType;                        //@synthesize peerType=_peerType - In the implementation block
@property (nonatomic,readonly) NSInputStream * input;                     //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) NSOutputStream * output;                   //@synthesize output=_output - In the implementation block
@property (nonatomic,readonly) void* channel;                             //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) unsigned char localCLVersion;              //@synthesize localCLVersion=_localCLVersion - In the implementation block
@property (nonatomic,readonly) unsigned char peerCLVersion;               //@synthesize peerCLVersion=_peerCLVersion - In the implementation block
@property (nonatomic,readonly) unsigned localCLFeatures;                  //@synthesize localCLFeatures=_localCLFeatures - In the implementation block
@property (nonatomic,readonly) unsigned peerCLFeatures;                   //@synthesize peerCLFeatures=_peerCLFeatures - In the implementation block
-(void)setOrphan;
-(id)initWithPipeManager:(id)arg1 info:(id)arg2 ;
-(unsigned char)localCLVersion;
-(unsigned char)peerCLVersion;
-(unsigned)localCLFeatures;
-(unsigned)peerCLFeatures;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(long long)type;
-(NSInputStream *)input;
-(long long)priority;
-(void*)channel;
-(CBPeer *)peer;
-(NSOutputStream *)output;
-(long long)peerType;
-(CBCentral *)central;
-(char)reliablePipe;
@end


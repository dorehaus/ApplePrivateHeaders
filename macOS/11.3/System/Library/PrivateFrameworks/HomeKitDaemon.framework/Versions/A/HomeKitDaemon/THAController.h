/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet;

@interface THAController : NSObject {

	char _supportsSiri;
	char _connected;
	char _selected;
	unsigned _identifier;
	NSString* _name;
	unsigned long long _ticksPerSecond;
	NSSet* _selectedButtons;

}

@property (nonatomic,retain) NSSet * selectedButtons;                        //@synthesize selectedButtons=_selectedButtons - In the implementation block
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long ticksPerSecond;              //@synthesize ticksPerSecond=_ticksPerSecond - In the implementation block
@property (assign,nonatomic) char supportsSiri;                              //@synthesize supportsSiri=_supportsSiri - In the implementation block
@property (assign,nonatomic) char connected;                                 //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) char selected;                                  //@synthesize selected=_selected - In the implementation block
+(id)selectButtonConfiguration:(id)arg1 supportsSiri:(char)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned)identifier;
-(char)selected;
-(void)setSelected:(char)arg1 ;
-(char)connected;
-(void)setConnected:(char)arg1 ;
-(char)supportsSiri;
-(unsigned long long)ticksPerSecond;
-(void)setTicksPerSecond:(unsigned long long)arg1 ;
-(void)updateSelectedButtons:(id)arg1 ;
-(void)setSupportsSiri:(char)arg1 ;
-(id)initWithName:(id)arg1 identifier:(unsigned)arg2 ticksPerSecond:(unsigned long long)arg3 supportedButtons:(id)arg4 supportsSiri:(char)arg5 ;
-(char)dispatchButtonEvent:(id)arg1 ;
-(NSSet *)selectedButtons;
-(void)setSelectedButtons:(NSSet *)arg1 ;
@end


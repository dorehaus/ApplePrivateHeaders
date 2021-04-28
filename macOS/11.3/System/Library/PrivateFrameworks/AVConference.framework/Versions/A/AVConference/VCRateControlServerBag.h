/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface VCRateControlServerBag : NSObject {

	NSDictionary* _serverBagDict;
	int _operatingMode;

}
+(id)profileNumberKeyWithMode:(int)arg1 ;
+(id)keysWithMode:(int)arg1 ;
+(id)groupKeysWithMode:(int)arg1 primaryKey:(id)arg2 ;
+(id)prefixForMode:(int)arg1 ;
-(void)dealloc;
-(char)containsAllSecondaryKeysWithPrimaryKey:(id)arg1 ;
-(id)valueForSecondaryKeyWithPrimaryKey:(id)arg1 secondaryKey:(id)arg2 type:(int)arg3 ;
-(id)initWithMode:(int)arg1 serverBagDict:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CDDevice : NSObject {

	char _isDefaultPaired;
	unsigned _identifier;
	NSString* _modelIdentifier;

}

@property (readonly) unsigned identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * modelIdentifier;              //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (assign) char isDefaultPaired;                      //@synthesize isDefaultPaired=_isDefaultPaired - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)identifier;
-(id)initWithSession:(id)arg1 identifier:(unsigned)arg2 modelIdentifier:(id)arg3 defaultPaired:(char)arg4 error:(id*)arg5 ;
-(id)initWithSession:(id)arg1 identifier:(unsigned)arg2 modelIdentifier:(id)arg3 error:(id*)arg4 ;
-(char)isEqualToDevice:(id)arg1 ;
-(char)setSystemDataHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)readSystemDataWithError:(id*)arg1 ;
-(char)requestSystemDataWithError:(id*)arg1 ;
-(char)setLogDataHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)readLogDataWithError:(id*)arg1 ;
-(char)requestLogDataWithError:(id*)arg1 ;
-(NSString *)modelIdentifier;
-(char)isDefaultPaired;
-(void)setIsDefaultPaired:(char)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OpenDirectoryConfig.framework/Versions/A/OpenDirectoryConfig
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ODCServer : NSObject {

	NSString* _name;
	unsigned _type;
	unsigned _status;
	char _isAuthBound;
	char _isInAuthSearchPath;
	char _isInContantsSearchPath;

}

@property (readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (readonly) unsigned type;                          //@synthesize type=_type - In the implementation block
@property (readonly) unsigned status;                        //@synthesize status=_status - In the implementation block
@property (readonly) char authBound;                         //@synthesize isAuthBound=_isAuthBound - In the implementation block
@property (readonly) char inAuthSearchPath;                  //@synthesize isInAuthSearchPath=_isInAuthSearchPath - In the implementation block
@property (readonly) char inContactsSearchPath;              //@synthesize isInContantsSearchPath=_isInContantsSearchPath - In the implementation block
+(id)readEnabledServices:(id)arg1 error:(id*)arg2 ;
+(id)configuredServers:(id)arg1 withStatus:(char)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(unsigned)type;
-(unsigned)status;
-(id)initWithName:(id)arg1 type:(unsigned)arg2 status:(unsigned)arg3 authBound:(char)arg4 inAuthSearchPath:(char)arg5 inContactsSearchPath:(char)arg6 ;
-(char)authBound;
-(char)inAuthSearchPath;
-(char)inContactsSearchPath;
@end


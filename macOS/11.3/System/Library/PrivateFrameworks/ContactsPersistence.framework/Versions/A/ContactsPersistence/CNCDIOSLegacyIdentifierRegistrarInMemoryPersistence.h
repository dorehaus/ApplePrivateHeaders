/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNCDIOSLegacyIdentifierRegistrarPersistence.h>

@class CNCDIOSLegacyIdentifierRegistrarState;

@interface CNCDIOSLegacyIdentifierRegistrarInMemoryPersistence : NSObject <CNCDIOSLegacyIdentifierRegistrarPersistence> {

	CNCDIOSLegacyIdentifierRegistrarState* _state;

}

@property (nonatomic,retain) CNCDIOSLegacyIdentifierRegistrarState * state;              //@synthesize state=_state - In the implementation block
-(CNCDIOSLegacyIdentifierRegistrarState *)state;
-(void)setState:(CNCDIOSLegacyIdentifierRegistrarState *)arg1 ;
-(id)initWithState:(id)arg1 ;
-(char)saveState:(id)arg1 error:(id*)arg2 ;
@end


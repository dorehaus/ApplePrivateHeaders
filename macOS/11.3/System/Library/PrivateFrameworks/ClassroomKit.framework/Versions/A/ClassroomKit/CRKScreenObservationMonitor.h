/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKScreenObservationMonitorDelegate, CRKStudentConnectionPrimitives, CRKDarwinNotificationPublisher, CRKFeatureDataStoreProtocol, CRKStudentConnection, CRKObservation, CRKCancelable;
@class NSDictionary, CRKFetchObservingInstructorsByCourseOperation;

@interface CRKScreenObservationMonitor : NSObject {

	char _connecting;
	id<CRKScreenObservationMonitorDelegate> _delegate;
	NSDictionary* _observingInstructorsByCourse;
	id<CRKStudentConnectionPrimitives> _studentConnectionPrimitives;
	id<CRKDarwinNotificationPublisher> _darwinNotificationPublisher;
	id<CRKFeatureDataStoreProtocol> _featureDataStore;
	id<CRKStudentConnection> _studentConnection;
	id<CRKObservation> _observersDidChangeObservation;
	id<CRKCancelable> _enrollmentStatusDidChangeSubscription;
	CRKFetchObservingInstructorsByCourseOperation* _fetchObservingInstructorsByCourseOperation;

}

@property (nonatomic,readonly) id<CRKStudentConnectionPrimitives> studentConnectionPrimitives;                                        //@synthesize studentConnectionPrimitives=_studentConnectionPrimitives - In the implementation block
@property (nonatomic,readonly) id<CRKDarwinNotificationPublisher> darwinNotificationPublisher;                                        //@synthesize darwinNotificationPublisher=_darwinNotificationPublisher - In the implementation block
@property (nonatomic,readonly) id<CRKFeatureDataStoreProtocol> featureDataStore;                                                      //@synthesize featureDataStore=_featureDataStore - In the implementation block
@property (nonatomic,retain) id<CRKStudentConnection> studentConnection;                                                              //@synthesize studentConnection=_studentConnection - In the implementation block
@property (nonatomic,retain) id<CRKObservation> observersDidChangeObservation;                                                        //@synthesize observersDidChangeObservation=_observersDidChangeObservation - In the implementation block
@property (nonatomic,retain) id<CRKCancelable> enrollmentStatusDidChangeSubscription;                                                 //@synthesize enrollmentStatusDidChangeSubscription=_enrollmentStatusDidChangeSubscription - In the implementation block
@property (nonatomic,copy) NSDictionary * observingInstructorsByCourse;                                                               //@synthesize observingInstructorsByCourse=_observingInstructorsByCourse - In the implementation block
@property (nonatomic,retain) CRKFetchObservingInstructorsByCourseOperation * fetchObservingInstructorsByCourseOperation;              //@synthesize fetchObservingInstructorsByCourseOperation=_fetchObservingInstructorsByCourseOperation - In the implementation block
@property (assign,getter=isConnecting,nonatomic) char connecting;                                                                     //@synthesize connecting=_connecting - In the implementation block
@property (assign,nonatomic,__weak) id<CRKScreenObservationMonitorDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char hasObservingInstructors; 
+(id)keyPathsForValuesAffectingHasObservingInstructors;
+(char)automaticallyNotifiesObserversOfObservingInstructorsByCourse;
-(void)dealloc;
-(id)init;
-(id<CRKScreenObservationMonitorDelegate>)delegate;
-(void)setDelegate:(id<CRKScreenObservationMonitorDelegate>)arg1 ;
-(char)isConnecting;
-(id<CRKStudentConnection>)studentConnection;
-(id<CRKObservation>)observersDidChangeObservation;
-(id<CRKCancelable>)enrollmentStatusDidChangeSubscription;
-(void)beginObservingEnrollmentStatus;
-(void)connectToStudentdIfNeeded;
-(id)initWithStudentConnectionPrimitives:(id)arg1 darwinNotificationPublisher:(id)arg2 featureDataStore:(id)arg3 ;
-(NSDictionary *)observingInstructorsByCourse;
-(id<CRKFeatureDataStoreProtocol>)featureDataStore;
-(void)disconnectFromStudentdIfNeeded;
-(id<CRKDarwinNotificationPublisher>)darwinNotificationPublisher;
-(void)enrollmentStatusDidChange;
-(void)setEnrollmentStatusDidChangeSubscription:(id<CRKCancelable>)arg1 ;
-(void)setConnecting:(char)arg1 ;
-(id<CRKStudentConnectionPrimitives>)studentConnectionPrimitives;
-(void)didEstablishStudentConnection:(id)arg1 ;
-(void)didLoseStudentConnection;
-(void)setObserversDidChangeObservation:(id<CRKObservation>)arg1 ;
-(void)setStudentConnection:(id<CRKStudentConnection>)arg1 ;
-(void)setObservingInstructorsByCourse:(NSDictionary *)arg1 ;
-(void)fetchObservingInstructorsByCourse;
-(CRKFetchObservingInstructorsByCourseOperation *)fetchObservingInstructorsByCourseOperation;
-(void)setFetchObservingInstructorsByCourseOperation:(CRKFetchObservingInstructorsByCourseOperation *)arg1 ;
-(void)fetchObservingInstructorsByCourseOperationDidFinish:(id)arg1 ;
-(char)hasObservingInstructors;
-(id)instructorIdentifiersByCourseIdentifier;
@end


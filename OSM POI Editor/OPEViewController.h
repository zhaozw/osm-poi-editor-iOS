//
//  OPEViewController.h
//  OSM POI Editor
//
//  Created by David Chiles on 2/2/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RMMapView.h"
#import "RMMapViewDelegate.h" 
#import <CoreLocation/CoreLocation.h>
#import "OPENode.h"
#import "OPEOSMData.h"


@interface OPEViewController : UIViewController<RMMapViewDelegate> {
    IBOutlet RMMapView* mapView;
    CLLocationManager* locationManager;
}

@property (nonatomic,retain) OPEOSMData * osmData;

-(void) addMarkerAt:(CLLocationCoordinate2D) markerPosition withNode:(OPENode *) node;



@end

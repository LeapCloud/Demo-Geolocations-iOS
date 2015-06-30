//
//  DetailViewController.h
//  Geolocations
//
//  Created by Héctor Ramos on 7/31/12.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface DetailViewController : UIViewController <MKMapViewDelegate>

@property (nonatomic, strong) LASObject *detailItem;
@property (nonatomic, weak) IBOutlet MKMapView *mapView;

@end
